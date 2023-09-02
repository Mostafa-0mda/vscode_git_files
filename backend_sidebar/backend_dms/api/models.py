from django.db import models

# Create your models here.
class Room(models.model):
  code = model.models.CharField(max_length=8, default="", unique=True)
  