﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateVinyl : MonoBehaviour {

	// Rotate spinner vinyl.
	void Update () {
		Vector3 rotation = new Vector3 (0, 0, -45);

		transform.Rotate (rotation * Time.deltaTime * 40.0f);
	}
}
