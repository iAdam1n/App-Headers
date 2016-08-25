/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSArray;

@interface EBKImagePickerInternalData : NSObject <NSCopying> {

	NSMutableArray* _mutableDataAssets;

}

@property (nonatomic,retain) NSMutableArray * mutableDataAssets;              //@synthesize mutableDataAssets=_mutableDataAssets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * dataAssets; 
-(NSArray *)dataAssets;
-(NSMutableArray *)mutableDataAssets;
-(void)setMutableDataAssets:(NSMutableArray *)arg1 ;
-(void)addDataAsset:(id)arg1 ;
-(void)moveDataAssetAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)removeDataAssetsAtIndexes:(id)arg1 ;
-(void)removeDataAsset:(id)arg1 ;
-(id)dataAssetForAssetURL:(id)arg1 ;
-(id)dataAssetForPHAssetLocalIdentifier:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

