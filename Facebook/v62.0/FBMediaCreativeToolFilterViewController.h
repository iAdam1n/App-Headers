/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBMediaCreativeToolFilterViewDelegate.h>
#import <Facebook/FBMediaCreativeTool.h>
#import <Facebook/FBVideoCreativeToolsApplierVideoOutputDelegate.h>

@protocol FBVideoCreativeToolsApplier, FBVideoCreativeToolsLoggerProtocol;
@class FBUserSession, NSArray, UIView, UISwipeGestureRecognizer, FBMediaCreativeToolFilterView, NSString, FBMediaCreativeToolbar;

@interface FBMediaCreativeToolFilterViewController : UIViewController <FBMediaCreativeToolFilterViewDelegate, FBMediaCreativeTool, FBVideoCreativeToolsApplierVideoOutputDelegate> {

	FBUserSession* _session;
	NSArray* _filters;
	BOOL _masksEnabled;
	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	UIView* _videoPreviewContentView;
	unsigned long long _frame;
	unsigned long long _selectedFilterIndex;
	long long _cameraPosition;
	UISwipeGestureRecognizer* _leftSwipeGesture;
	UISwipeGestureRecognizer* _rightSwipeGesture;
	BOOL _enableStaticFilteredImage;

}

@property (nonatomic,retain) FBMediaCreativeToolFilterView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * creativeToolTitle; 
@property (nonatomic,readonly) unsigned long long glyphName; 
@property (nonatomic,readonly) unsigned long long glyphSize; 
@property (nonatomic,readonly) FBMediaCreativeToolbar * creativeToolbar; 
@property (nonatomic,readonly) UIView * creativeToolTrayView; 
@property (nonatomic,readonly) UIView * videoPreviewContentView; 
@property (assign,nonatomic) BOOL translucent; 
+(id)_logName;
-(unsigned long long)glyphSize;
-(NSString *)creativeToolTitle;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(id)initWithSession:(id)arg1 creativeToolsApplier:(id)arg2 filters:(id)arg3 cameraPosition:(long long)arg4 enableStaticFilteredImage:(BOOL)arg5 logger:(id)arg6 masksEnabled:(BOOL)arg7 ;
-(UIView *)videoPreviewContentView;
-(void)creativeToolsApplier:(id)arg1 didOutputVideoSampleBuffer:(opaqueCMSampleBufferRef)arg2 contentTransform:(GLKMatrix4)arg3 ;
-(void)_swipedLeftOnCameraPreview:(id)arg1 ;
-(void)_swipedRightOnCameraPreview:(id)arg1 ;
-(void)_applyFilterAtIndex:(unsigned long long)arg1 ;
-(void)mediaCreativeToolFilterView:(id)arg1 didSelectFilterAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)glyphName;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
