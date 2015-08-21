/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAttachmentNode.h>
#import <Messenger/FBModallyPresentableItem.h>

@protocol FBModalPresentationLayer;
@class UIView, CALayer, ASDisplayNode, NSHashTable, NSString, UIViewController;

@interface FBOpenableAttachmentNode : FBAttachmentNode <FBModallyPresentableItem> {

	BOOL _open;
	BOOL _gesturesEnabled;
	id<FBModalPresentationLayer> _modalLayer;
	UIView* _originalSuperview;
	CALayer* _dropShadowLayer;
	ASDisplayNode* _openedOverlayNode;
	BOOL _backgroundIsPushedBack;
	unsigned long long _previousState;
	unsigned long long _state;
	NSHashTable* _observers;
	BOOL _pushBackEnabled;

}

@property (assign,nonatomic,__weak) id<FBOpenableAttachmentNodeDelegate> delegate; 
@property (assign,nonatomic) BOOL gesturesEnabled;                                              //@synthesize gesturesEnabled=_gesturesEnabled - In the implementation block
@property (assign,nonatomic) BOOL pushBackEnabled;                                              //@synthesize pushBackEnabled=_pushBackEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                           //@synthesize open=_open - In the implementation block
@property (nonatomic,retain) ASDisplayNode * openedOverlayNode;                                 //@synthesize openedOverlayNode=_openedOverlayNode - In the implementation block
@property (nonatomic,readonly) CALayer * dropShadowLayer;                                       //@synthesize dropShadowLayer=_dropShadowLayer - In the implementation block
@property (nonatomic,readonly) unsigned long long previousState;                                //@synthesize previousState=_previousState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * modalPresentationView; 
@property (nonatomic,readonly) UIViewController * modalPresentationViewController; 
+(id)_dropShadowImage;
-(void)pop_animationDidApply:(id)arg1 ;
-(UIView *)modalPresentationView;
-(BOOL)shouldAutoRotate;
-(CALayer *)dropShadowLayer;
-(id)closedHostView;
-(BOOL)gestureRecognizerShouldIntervene:(id)arg1 ;
-(BOOL)shouldBeginGesture:(id)arg1 ;
-(void)didClose;
-(void)willOpen;
-(void)mayOpen;
-(void)mayClose;
-(void)prepareForOpening;
-(void)setTransientState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)openedSizeForOrientation:(long long)arg1 ;
-(void)performAdditionalOpeningAnimations;
-(void)cleanUpAfterClosing;
-(CGRect)closedFrameInView:(id)arg1 ;
-(void)performAdditionalClosingAnimations;
-(void)animationDidApply:(id)arg1 ;
-(void)openAnimated:(BOOL)arg1 ;
-(void)closeAnimated:(BOOL)arg1 ;
-(id)dropShadowCastingLayers;
-(id)modalLayer;
-(void)changedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2 ;
-(double)pushBackProgress;
-(void)_setState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)_setBackgroundIsPushedBack:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willClose;
-(void)willLift;
-(void)didUnlift;
-(BOOL)pushBackEnabled;
-(void)addOpenableObserver:(id)arg1 ;
-(void)removeOpenableObserver:(id)arg1 ;
-(ASDisplayNode *)openedOverlayNode;
-(void)setOpenedOverlayNode:(ASDisplayNode *)arg1 ;
-(void)setPushBackEnabled:(BOOL)arg1 ;
-(void)didLoad;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(BOOL)gesturesEnabled;
-(void)setGesturesEnabled:(BOOL)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)updateDropShadow;
-(unsigned long long)previousState;
-(void)didOpen;
-(BOOL)isOpen;
-(void)setOpen:(BOOL)arg1 ;
@end

