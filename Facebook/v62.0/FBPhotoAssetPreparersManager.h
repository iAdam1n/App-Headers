/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBPhotoAssetPreparersManager : NSObject {

	NSMutableDictionary* _assetPreparersDictionary;
	BOOL _allowFaceDetect;
	BOOL _allowTagging;

}
-(void)cancelPhotoAssetPreparerForAssetID:(id)arg1 andSession:(id)arg2 ;
-(id)initWithAllowFaceDetect:(BOOL)arg1 allowTagging:(BOOL)arg2 ;
-(void)setAllowFaceDetection:(BOOL)arg1 allowTagging:(BOOL)arg2 ;
-(id)getOrMakePhotoAssetPreparerForPhotoAsset:(id)arg1 andSession:(id)arg2 ;
-(id)_preparerKeyWithPhotoAsset:(id)arg1 andSession:(id)arg2 ;
-(id)init;
@end
