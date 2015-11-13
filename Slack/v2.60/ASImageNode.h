/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/ASControlNode.h>

@class UIImage, UIColor;

@interface ASImageNode : ASControlNode {

	UIImage* _image;
	/*^block*/id _displayCompletionBlock;
	RecursiveMutex _imageLock;
	BOOL _cropEnabled;
	CGRect _cropRect;
	CGRect _cropDisplayBounds;
	UIColor* _placeholderColor;
	/*^block*/id _imageModificationBlock;

}

@property (retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * placeholderColor;                         //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,getter=isCropEnabled,nonatomic) BOOL cropEnabled; 
@property (assign,nonatomic) CGRect cropRect; 
@property (nonatomic,copy) id imageModificationBlock;                            //@synthesize imageModificationBlock=_imageModificationBlock - In the implementation block
+(id)displayWithParameters:(id)arg1 isCancelled:(/*^block*/id)arg2 ;
-(id)initWithViewBlock:(/*^block*/id)arg1 ;
-(id)drawParametersForAsyncLayer:(id)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)displayDidFinish;
-(id)initWithLayerBlock:(/*^block*/id)arg1 ;
-(id)imageModificationBlock;
-(void)setImageModificationBlock:(id)arg1 ;
-(void)setCropEnabled:(BOOL)arg1 recropImmediately:(BOOL)arg2 inBounds:(CGRect)arg3 ;
-(void)setNeedsDisplayWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)isCropEnabled;
-(void)setCropEnabled:(BOOL)arg1 ;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(UIColor *)placeholderColor;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(UIImage *)image;
@end

