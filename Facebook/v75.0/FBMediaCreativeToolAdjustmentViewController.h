/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMediaCreativeToolBaseViewController.h>
#import <Facebook/FBMediaCreativeToolbarDelegate.h>

@class FBMediaCreativeToolbar, NSArray, FBVideoProcessorFilterConfig, NSString;

@interface FBMediaCreativeToolAdjustmentViewController : FBMediaCreativeToolBaseViewController <FBMediaCreativeToolbarDelegate> {

	FBMediaCreativeToolbar* _toolbar;
	NSArray* _cellModels;
	FBVideoProcessorFilterConfig* _defaultFilterConfig;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creativeToolKey;
+(id)_logName;
-(unsigned long long)glyphSize;
-(id)creativeToolTitle;
-(id)creativeToolbar;
-(void)_clearAdjustments;
-(void)_didSelectItem:(BOOL)arg1 atIndexPath:(id)arg2 ;
-(void)_didSelectItemAtIndexPath:(id)arg1 ;
-(void)_didDeselectItemAtIndexPath:(id)arg1 ;
-(id)_defaultFilterConfig;
-(void)_logRotationActionAtIndex:(unsigned long long)arg1 isApplied:(BOOL)arg2 ;
-(void)_updateCellWithNewCellModelAtIndexPath:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)_command;
-(id)_cellIconURLAtIndex:(unsigned long long)arg1 isEnabled:(BOOL)arg2 ;
-(BOOL)_isItemEnabledAtIndex:(unsigned long long)arg1 ;
-(id)_cellModelWithTitle:(id)arg1 iconURL:(id)arg2 ;
-(id)_createCollectionViewData;
-(void)mediaCreativeToolsBaseView:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)mediaCreativeToolsBaseView:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_refreshToolbarButtonStates;
-(void)mediaCreativeToolbar:(id)arg1 selectedButtonAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)glyphName;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
