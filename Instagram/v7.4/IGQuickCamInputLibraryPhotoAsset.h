/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGQuickCamInputLibraryAsset.h>
#import <Instagram/IGQuickCamInputPhotoAsset.h>

@class PHAsset, ALAsset, NSString;

@interface IGQuickCamInputLibraryPhotoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputPhotoAsset> {

	PHAsset* _phAsset;
	ALAsset* _alAsset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PHAsset * phAsset;                     //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain) ALAsset * alAsset;                     //@synthesize alAsset=_alAsset - In the implementation block
-(PHAsset *)phAsset;
-(void)setPhAsset:(PHAsset *)arg1 ;
-(ALAsset *)alAsset;
-(void)setAlAsset:(ALAsset *)arg1 ;
@end

