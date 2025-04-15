import subprocess
import shlex

from typing import Optional

class MediaAsset:
    def __init__(
        self,
        photo_uri: Optional[str] = None,
        video_uri: Optional[str] = None,
        photo_uri2: Optional[str] = None,
        video_uri2: Optional[str] = None,
        timestamp: Optional[int] = None
    ):
        self.photo_uri = photo_uri
        self.video_uri = video_uri
        self.photo_uri2 = photo_uri2
        self.video_uri2 = video_uri2
        self.timestamp = timestamp

# si video(s) faire mettre les videos dans l'ordre puis si 1 photo 1 seconde photo et si 2 photos alors 1 seconde double photo. 
# Puis concat ca au reste

#Var globale
scale = 1000

def MediaAssetToString():
    

def execute_ffmpeg():
    """Executes FFmpeg command to create a rounded corner image."""
    
    try:
        M1 = MediaAsset()
        L = [ M1 ]

        # Base command as a template string
        #ffmpeg_cmd_template = '''ffmpeg -i Screenshot_2025-04-15_at_18.21.56.png -vf "format=rgba,geq=r='p(X,Y)':g='p(X,Y)':b='p(X,Y)':a='if(gte(hypot(X-MODIFY,Y-MODIFY),MODIFY)*lt(X,MODIFY)*lt(Y,MODIFY)+gte(hypot(X-(W-MODIFY),Y-MODIFY),MODIFY)*gt(X,W-MODIFY)*lt(Y,MODIFY)+gte(hypot(X-MODIFY,Y-(H-MODIFY)),MODIFY)*lt(X,MODIFY)*gt(Y,H-MODIFY)+gte(hypot(X-(W-MODIFY),Y-(H-MODIFY)),MODIFY)*gt(X,W-MODIFY)*gt(Y,H-MODIFY),0,255)'" output_rounded.png'''
        ffmpeg_cmd_template = "ffmpeg"

        # Replace MODIFY with the actual radius value
        ffmpeg_cmd = ffmpeg_cmd_template.replace('MODIFY', str(20))
        
        # Use shlex.split to correctly split the command into a list of arguments
        cmd_list = shlex.split(ffmpeg_cmd)
        
        
        # Run the command
        result = subprocess.run(cmd_list)
        
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    execute_ffmpeg()  # Change the radius as needed