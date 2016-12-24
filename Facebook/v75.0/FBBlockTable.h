/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBLinkedDictionary, NSMutableDictionary;

@interface FBBlockTable : NSObject {

	FBLinkedDictionary* _allBlocks;
	NSMutableDictionary* _blocksByType;
	NSMutableDictionary* _typesByBlockID;

}
-(id)_keyForBlock:(id)arg1 ;
-(id)_blocksForType:(id)arg1 ;
-(id)blockTypeForBlock:(id)arg1 ;
-(void)addBlock:(id)arg1 ofType:(id)arg2 ;
-(void)removeBlock:(id)arg1 ;
-(id)blockWithID:(id)arg1 ;
-(id)firstBlock;
-(id)firstBlockOfType:(id)arg1 ;
-(id)blockAfterBlock:(id)arg1 ;
-(unsigned long long)blockCountForType:(id)arg1 ;
-(id)init;
-(unsigned long long)blockCount;
-(id)lastBlock;
@end
