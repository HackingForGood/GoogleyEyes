using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Login : MonoBehaviour {

	public Text emailText;
	public Text passwordText;
	public Text errorText;

	public GameObject[] screens;
	/*
	* 0 - Login
	* 1 - 
	* 2 -
	* 3 - 
	* 4 -
	* 5 -
	*/

	private string email;
	private string password;

	public void TryLogin() {
		if (password == "password") {
			DoLogin();
		} else {
			ErrorMessage();
		}
	}

	void DoLogin() {
		StartCoroutine(LoginMe());
	}

	IEnumerator LoginMe() {
		yield return new WaitForSeconds (0.5f);
		SetScreen(2);
	}

	void ErrorMessage() {
		StartCoroutine (ErrorMe());
	}

	public void SetScreen (int index) {
		foreach (GameObject go in screens) {
			go.SetActive(false);
		}
		screens[index].SetActive(true);
	}

	IEnumerator ErrorMe() {
		errorText.text = "Invalid username or password";
		yield return new WaitForSeconds(3f);
		errorText.text = "";
	}

	// Update is called once per frame
	void Update () {
		email = emailText.text;
		password = passwordText.text;
	}
}