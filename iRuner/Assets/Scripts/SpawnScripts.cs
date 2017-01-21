using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnScripts : MonoBehaviour {


	public GameObject [] obj;
	public float spawnMin = 1.0f;
	public float spawnMax = 2.0f;

	void Start() {
		Spawn ();
	}

	void Spawn() {
	
		Instantiate (obj[Random.Range (0, obj.GetLength (0))], transform.position, Quaternion.identity);
		Invoke("Spawn", Random.Range(spawnMin, spawnMax));

	}
}
