/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaCreativeToolGenericFilterViewDelegate.h>
#import <Messenger/FBMediaCreativeTool.h>

@protocol FBVideoCreativeToolsApplier, FBVideoCreativeToolsLoggerProtocol, FBMediaCreativeToolDelegate;
@class FBUserSession, UIView, FBMediaCreativeToolGenericFilterView, NSString, FBMediaCreativeToolbar;

@interface FBMediaCreativeToolParticleFilterViewController : UIViewController <FBMediaCreativeToolGenericFilterViewDelegate, FBMediaCreativeTool> {

	FBUserSession* _session;
	id<FBVideoCreativeToolsApplier> _creativeToolsApplier;
	id<FBVideoCreativeToolsLoggerProtocol> _logger;
	UIView* _videoPreviewContentView;
	unsigned long long _selectedFilterIndex;
	long long _cameraPosition;
	id<FBMediaCreativeToolDelegate> _creativeToolDelegate;

}

@property (nonatomic,retain) FBMediaCreativeToolGenericFilterView * view; 
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
@property (assign,nonatomic,__weak) id<FBMediaCreativeToolDelegate> creativeToolDelegate;              //@synthesize creativeToolDelegate=_creativeToolDelegate - In the implementation block
@property (assign,nonatomic) BOOL translucent; 
+(id)creativeToolKey;
+(id)_logName;
-(UIView *)videoPreviewContentView;
-(id<FBMediaCreativeToolDelegate>)creativeToolDelegate;
-(NSString *)creativeToolTitle;
-(unsigned long long)glyphSize;
-(FBMediaCreativeToolbar *)creativeToolbar;
-(UIView *)creativeToolTrayView;
-(void)setCreativeToolDelegate:(id<FBMediaCreativeToolDelegate>)arg1 ;
-(void)_applyFilterAtIndex:(unsigned long long)arg1 ;
-(void)mediaCreativeToolGenericFilterView:(id)arg1 didSelectFilterAtIndex:(unsigned long long)arg2 ;
-(id)initWithSession:(id)arg1 creativeToolsApplier:(id)arg2 logger:(id)arg3 ;
-(unsigned long long)glyphName;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
