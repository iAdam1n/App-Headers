/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TGHolderSet : NSObject {

	NSMutableArray* _holders;
	/*^block*/id _emptyStateChanged;

}

@property (nonatomic,copy) id emptyStateChanged;              //@synthesize emptyStateChanged=_emptyStateChanged - In the implementation block
-(void)setEmptyStateChanged:(id)arg1 ;
-(void)addHolder:(id)arg1 ;
-(void)removeHolder:(id)arg1 ;
-(id)emptyStateChanged;
-(id)init;
-(BOOL)isEmpty;
@end
