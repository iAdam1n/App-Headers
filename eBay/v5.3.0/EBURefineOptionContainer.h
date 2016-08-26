/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBURefineOptionBase.h>

@class NSArray, NSIndexSet;

@interface EBURefineOptionContainer : EBURefineOptionBase {

	BOOL _allowMultiSelection;
	NSArray* _optionList;
	/*^block*/id _valueSelectionHandler;

}

@property (nonatomic,copy) NSArray * optionList;                                   //@synthesize optionList=_optionList - In the implementation block
@property (assign,nonatomic) BOOL allowMultiSelection;                             //@synthesize allowMultiSelection=_allowMultiSelection - In the implementation block
@property (nonatomic,readonly) NSArray * selectedValues; 
@property (nonatomic,readonly) NSIndexSet * indicesForSelectedValues; 
@property (nonatomic,copy) id valueSelectionHandler;                               //@synthesize valueSelectionHandler=_valueSelectionHandler - In the implementation block
-(NSArray *)optionList;
-(void)setOptionList:(NSArray *)arg1 ;
-(id)optionWithIdentifier:(id)arg1 ;
-(id)optionContainerWithIdentifier:(id)arg1 ;
-(NSIndexSet *)indicesForSelectedValues;
-(BOOL)selectOptionValue:(id)arg1 deselectOtherValues:(BOOL)arg2 ;
-(BOOL)updateOptionValue:(id)arg1 withSelectedState:(BOOL)arg2 ;
-(void)addOptions:(id)arg1 ;
-(void)addOption:(id)arg1 ;
-(void)removeOption:(id)arg1 ;
-(id)optionAtIndex:(unsigned long long)arg1 ;
-(BOOL)selectOptionValue:(id)arg1 ;
-(BOOL)deselectOptionValue:(id)arg1 ;
-(BOOL)allowMultiSelection;
-(void)setAllowMultiSelection:(BOOL)arg1 ;
-(id)valueSelectionHandler;
-(void)setValueSelectionHandler:(id)arg1 ;
-(NSArray *)selectedValues;
-(id)stringValue;
@end
