/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoEditingViewControllerDelegate <NSObject>
@required
-(void)videoEditingViewController:(id)arg1 didChangeTrimRange:(SCD_Struct_FB26)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeMuteState:(BOOL)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeCropOriginWidthProportion:(double)arg2 cropOriginHeightProportion:(double)arg3;
-(void)videoEditingViewController:(id)arg1 didChangeFilterConfig:(id)arg2;
-(void)videoEditingViewController:(id)arg1 didChangeHDUploadSelection:(BOOL)arg2;
-(void)videoEditingViewControllerDidChangeToTrimView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToSoundView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToCropView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToFilterView:(id)arg1;
-(void)videoEditingViewControllerDidChangeToCoverView:(id)arg1;

@end
