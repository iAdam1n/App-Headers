/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIImageView.h>

@class NSMutableArray;

@interface SKPImageViewAnimated : UIImageView {

	NSMutableArray* _imageArray;
	long long _nrFrames;

}

@property (nonatomic,retain) NSMutableArray * imageArray;              //@synthesize imageArray=_imageArray - In the implementation block
@property (assign,nonatomic) long long nrFrames;                       //@synthesize nrFrames=_nrFrames - In the implementation block
-(id)initWithSpriteSheet:(id)arg1 frame:(CGRect)arg2 ;
-(void)setImageArray:(NSMutableArray *)arg1 ;
-(id)constructImageFromSpriteSheet:(id)arg1 ;
-(void)setNrFrames:(long long)arg1 ;
-(long long)nrFrames;
-(NSMutableArray *)imageArray;
@end
