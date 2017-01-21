using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameOverScript : MonoBehaviour {

	public Text uiText;
	// Use this for initialization
	void Start () {
		var score = PlayerPrefs.GetInt ("score");
		uiText.text = "Your score is: " + score;
	}

	public void PlayAgain(){
		SceneManager.LoadScene (1);
	}

}
