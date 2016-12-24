/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface Action : NSObject {

	int action;
	NSMutableArray* contacts;
	NSMutableArray* words;

}

@property (assign,nonatomic) int action; 
@property (nonatomic,retain) NSMutableArray * contacts; 
@property (nonatomic,retain) NSMutableArray * words; 
-(id)getDictionary;
-(int)getCheckSum;
-(void)addWord:(id)arg1 ;
-(void)removeWord:(id)arg1 ;
-(void)dealloc;
-(int)action;
-(id)initWithType:(int)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setWords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)words;
-(void)addContact:(id)arg1 ;
-(void)removeContact:(id)arg1 ;
-(NSMutableArray *)contacts;
-(void)setContacts:(NSMutableArray *)arg1 ;
@end
