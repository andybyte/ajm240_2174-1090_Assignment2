using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VinylBehavior : MonoBehaviour {

	public float speed;
	private Vector3 target;

	// Use this for initialization
	void Start () {

		// Set initial position of zombie.
		transform.position = new Vector3 (-9.0f, -10.0f);
//
//		// Set random speed of the zombie. #DONE
//		speed = Random.Range(0.01f,0.05f);
//
//		// -4 to 2 upper/lower limits ; relative to the pivot center of the background.
//		posY = Random.Range (-4.0f, 4.14f);
//
//		// Set X to be off screen. #DONE
//		posX = 11.0f;
//
		// Set initial position of zombie.
//		target.transform.position = new Vector3 (posX, posY);

		target = new Vector3 (Random.Range (-8.7f, 0.0f), -3.9f);
	}
	
	// Update is called once per frame
	void Update () {
		float step = speed * Time.deltaTime;
		transform.position = Vector3.MoveTowards (transform.position, target, step);
	}
}
