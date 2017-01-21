using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PowerUpScripts : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D other) {

		if (other.tag == "Player") {
			HubSingleton.Instance.IncreaseScore (10);
			Destroy (gameObject);
		}
	}
}

class HubSingleton {

	private static HubSingleton instance;

	private HubScripts hub;

	private HubSingleton() {
		hub = GameObject.Find ("Main Camera").GetComponent <HubScripts>();
	}

	public static HubSingleton Instance { get { 
			if (instance == null) {
				instance = new HubSingleton ();
			}
			return instance;
		}}

	public void IncreaseScore(int amount) {
		hub.IncreaseScore (amount);
	}
}
