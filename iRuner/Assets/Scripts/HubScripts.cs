using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HubScripts : MonoBehaviour {

	float playerScore = 0f;
	
	// Update is called once per frame
	void Update () {
		playerScore += Time.deltaTime;
	}

	public void IncreaseScore(int amount) {
		playerScore += amount;
	}

	void OnGUI() {
		GUI.Label(new Rect(10,10, 100, 30), "Score: " + (int)playerScore);
	}

	void OnDisable() {
		PlayerPrefs.SetInt ("score", (int)playerScore);
	}


}
