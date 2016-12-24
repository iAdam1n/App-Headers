/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, SPipe, SMetaDisposable;

@interface TGMediaSelectionContext : NSObject {

	NSMutableArray* _selectedIdentifiers;
	NSMutableDictionary* _selectionMap;
	SPipe* _pipe;
	SMetaDisposable* _itemSourceUpdatedDisposable;
	/*^block*/id _updatedItemsSignal;

}

@property (nonatomic,copy) id updatedItemsSignal;              //@synthesize updatedItemsSignal=_updatedItemsSignal - In the implementation block
+(id)combinedSelectionChangedSignalForContexts:(id)arg1 ;
-(BOOL)toggleItemSelection:(id)arg1 animated:(BOOL)arg2 sender:(id)arg3 ;
-(void)setItemSourceUpdatedSignal:(id)arg1 ;
-(void)setUpdatedItemsSignal:(id)arg1 ;
-(id)selectionChangedSignal;
-(void)setItem:(id)arg1 selected:(BOOL)arg2 ;
-(void)enumerateSelectedItems:(/*^block*/id)arg1 ;
-(BOOL)isItemSelected:(id)arg1 ;
-(id)itemInformativeSelectedSignal:(id)arg1 ;
-(void)setItem:(id)arg1 selected:(BOOL)arg2 animated:(BOOL)arg3 sender:(id)arg4 ;
-(id)updatedItemsSignal;
-(BOOL)toggleItemSelection:(id)arg1 ;
-(id)itemSelectedSignal:(id)arg1 ;
-(id)selectedItemsIdentifiers;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)clear;
-(id)selectedItems;
@end
