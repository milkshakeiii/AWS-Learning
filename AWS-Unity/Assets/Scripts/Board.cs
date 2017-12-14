using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Board : MonoBehaviour
{
    public GameObject[] tiles;

    public int width;
    public int height;
    public float tileSize;

    void Start()
    {
        System.Random random = new System.Random();

        GenerateBoard(random);
    }

    private void GenerateBoard(System.Random random)
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                int randomTileIndex = random.Next(tiles.Length);
                GameObject newTile = Instantiate(tiles[randomTileIndex]) as GameObject;
                newTile.transform.parent = gameObject.transform;
                newTile.transform.localPosition = IndexToPosition(i, j); 
            }
        }
    }

    private Vector3 IndexToPosition(int i, int j)
    {
        float bottom = -height * tileSize / 2;
        float left = -width * tileSize / 2;
        return new Vector3(left + tileSize * i, bottom + tileSize * j, 0);
    }
}