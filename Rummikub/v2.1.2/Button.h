/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Rummikub/Rummikub-Structs.h>
@class NSMutableArray, GLViewController, GLViewController_Ipad;

@interface Button : NSObject {

	int positionY;
	int faceId;
	float vertices[2][8];
	float texes[2][8];
	int active;
	int hover;
	NSMutableArray* options;
	GLViewController* m_glViewController;
	GLViewController_Ipad* m_glViewControllerIpad;

}

@property (nonatomic,retain) GLViewController * glViewController; 
@property (nonatomic,retain) GLViewController_Ipad * glViewControllerIpad; 
-(void)touchBegan:(CGPoint)arg1 ;
-(void)touchEnded:(char)arg1 ;
-(id)initWithFace:(int)arg1 onY:(int)arg2 ;
-(void)showFullscreenAd;
-(void)removeAdMaximBanner;
-(void)render;
-(void)dealloc;
-(void)setPosition:(int)arg1 ;
-(int)height;
-(char)hitTest:(CGPoint)arg1 ;
-(void)touchMoved:(CGPoint)arg1 ;
@end

