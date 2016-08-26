/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBTemporaryDeletionIndexPathTranslator : NSObject {

	NSMutableDictionary* _temporaryDeletedItems;

}
-(BOOL)originalIndexPathIsDeleted:(id)arg1 ;
-(void)restoreOriginalIndexPath:(id)arg1 ;
-(id)adjustedIndexPathsForOriginalIndexPaths:(id)arg1 ;
-(long long)deletedItemsInSection:(long long)arg1 ;
-(id)originalIndexPathForAdjustedIndexPath:(id)arg1 ;
-(void)removeOriginalIndexPath:(id)arg1 ;
-(long long)_numItemsLessThanIndexPath:(id)arg1 ;
-(long long)_transformIndexPath:(id)arg1 ;
-(id)adjustedIndexPathForOriginalIndexPath:(id)arg1 ;
-(id)originalIndexPathsForAdjustedIndexPaths:(id)arg1 ;
-(id)init;
@end
