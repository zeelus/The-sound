using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraRunerScripts : MonoBehaviour {

	public Transform player;
	// Update is called once per frame
	void Update () {
		if (player != null)
		this.transform.position = new Vector3 (player.transform.position.x + 6, 0, -10);
	}
}
