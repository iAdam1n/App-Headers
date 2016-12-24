/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TGCollectionViewUpdateContext : NSObject {

	NSMutableArray* _updates;

}
-(void)insertSectionAtIndex:(unsigned long long)arg1 ;
-(void)deleteSectionAtIndex:(unsigned long long)arg1 ;
-(void)insertItemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2 ;
-(void)deleteItemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2 ;
-(void)replaceItemAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2 ;
-(id)init;
-(void)commit:(id)arg1 ;
@end
