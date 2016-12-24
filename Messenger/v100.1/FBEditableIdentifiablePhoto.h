/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBPhotoAssetEdits, NSString, UIImage;


@protocol FBEditableIdentifiablePhoto <NSObject>
@property (nonatomic,retain) FBPhotoAssetEdits * edits; 
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,retain) UIImage * displayImage; 
@property (nonatomic,readonly) UIImage * displayThumbnailImage; 
@required
-(FBPhotoAssetEdits *)edits;
-(void)setDisplayImage:(id)arg1;
-(void)setEdits:(id)arg1;
-(UIImage *)displayThumbnailImage;
-(UIImage *)displayImage;
-(NSString *)assetID;

@end
