/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface FBMediaComposition : NSObject {

	NSMutableOrderedSet* _selectedMediaShareItemsInOrderSet;
	unsigned long long _selectedMediaShareItemsType;
	NSMutableDictionary* _editedThumbnailsForAssetIDs;
	NSMutableDictionary* _assetEditsByID;

}

@property (nonatomic,readonly) BOOL containsVideoShareItems; 
@property (nonatomic,readonly) unsigned long long numSelectedMediaShareItems; 
@property (nonatomic,readonly) NSArray * selectedMediaShareItems; 
@property (nonatomic,readonly) unsigned long long selectedMediaShareItemsType;               //@synthesize selectedMediaShareItemsType=_selectedMediaShareItemsType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * editedThumbnailsForAssetIDs;              //@synthesize editedThumbnailsForAssetIDs=_editedThumbnailsForAssetIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetEditsByID;                           //@synthesize assetEditsByID=_assetEditsByID - In the implementation block
-(unsigned long long)selectedMediaShareItemsType;
-(NSArray *)selectedMediaShareItems;
-(id)photoAssetEditsForAssetID:(id)arg1 ;
-(unsigned long long)numSelectedMediaShareItems;
-(void)removeAllSelectedMediaShareItems;
-(NSMutableDictionary *)editedThumbnailsForAssetIDs;
-(NSMutableDictionary *)assetEditsByID;
-(unsigned long long)_selectedMediaShareItemsTypeForMediaShareItemType:(unsigned long long)arg1 ;
-(void)_addMediaShareItemHelper:(id)arg1 shareItemType:(unsigned long long)arg2 ;
-(void)_removeMediaShareItemHelper:(id)arg1 shareItemType:(unsigned long long)arg2 ;
-(void)_setMediaShareItemsHelper:(id)arg1 shareItemType:(unsigned long long)arg2 ;
-(void)setPhotoAssetEdits:(id)arg1 forAssetID:(id)arg2 ;
-(BOOL)containsVideoShareItems;
-(void)setPhotoShareItems:(id)arg1 ;
-(BOOL)isAssetSelected:(id)arg1 ;
-(unsigned long long)indexOfMediaShareItem:(id)arg1 ;
-(void)setEditedThumbnailsForAssetIDs:(NSMutableDictionary *)arg1 ;
-(void)setAssetEditsByID:(NSMutableDictionary *)arg1 ;
-(id)editedPhotoThumbnailForAssetID:(id)arg1 ;
-(void)removeGenericMediaShareItem:(id)arg1 ;
-(void)removeMediaShareItem:(id)arg1 ;
-(BOOL)allowOperationForSelectedMediaShareItemsType:(unsigned long long)arg1 ;
-(void)addGenericMediaShareItem:(id)arg1 ;
-(void)addMediaShareItem:(id)arg1 ;
-(void)replacePlayableMediaShareItem:(id)arg1 ;
-(void)copyComposition:(id)arg1 ;
-(void)clearPhotoAssetEdits;
-(id)mediaShareItemForAssetID:(id)arg1 ;
-(void)setEditedPhotoThumbnail:(id)arg1 forAssetID:(id)arg2 ;
-(void)resetPhotoAssetEditsForInMemoryPhotoAsset:(id)arg1 applyAutoEnhanceByDefault:(BOOL)arg2 session:(id)arg3 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)debugDescription;
@end
