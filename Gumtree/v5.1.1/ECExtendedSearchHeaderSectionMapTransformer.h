/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECSectionMapTransformer.h>

@interface ECExtendedSearchHeaderSectionMapTransformer : ECSectionMapTransformer {

	BOOL _adjustExtendedItemCount;
	BOOL _addedHeader;
	long long _itemCount;

}

@property (assign,nonatomic) BOOL addedHeader;                          //@synthesize addedHeader=_addedHeader - In the implementation block
@property (assign,nonatomic) long long itemCount;                       //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) BOOL adjustExtendedItemCount;              //@synthesize adjustExtendedItemCount=_adjustExtendedItemCount - In the implementation block
-(id)sectionMap;
-(void)setAddedHeader:(BOOL)arg1 ;
-(id)section:(id)arg1 forPage:(id)arg2 ;
-(BOOL)adjustExtendedItemCount;
-(BOOL)addedHeader;
-(void)setAdjustExtendedItemCount:(BOOL)arg1 ;
-(void)setItemCount:(long long)arg1 ;
-(long long)itemCount;
@end

