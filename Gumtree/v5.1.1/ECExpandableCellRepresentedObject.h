/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ECObserverSet;

@interface ECExpandableCellRepresentedObject : NSObject {

	BOOL _expanded;
	ECObserverSet* _stateObservers;
	ECObserverSet* _itemObservers;
	id _item;

}

@property (nonatomic,retain) ECObserverSet * stateObservers;                 //@synthesize stateObservers=_stateObservers - In the implementation block
@property (nonatomic,retain) ECObserverSet * itemObservers;                  //@synthesize itemObservers=_itemObservers - In the implementation block
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) id item;                                        //@synthesize item=_item - In the implementation block
-(id)initWithExpandedState:(BOOL)arg1 ;
-(void)toggleState;
-(ECObserverSet *)stateObservers;
-(ECObserverSet *)itemObservers;
-(void)setStateObservers:(ECObserverSet *)arg1 ;
-(void)setItemObservers:(ECObserverSet *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)item;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setItem:(id)arg1 ;
@end
