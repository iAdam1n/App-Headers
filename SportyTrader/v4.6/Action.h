/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(NSMutableArray *)contacts;
-(void)setContacts:(NSMutableArray *)arg1 ;
-(void)addContact:(id)arg1 ;
-(void)removeContact:(id)arg1 ;
-(void)dealloc;
-(int)action;
-(id)initWithType:(int)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setWords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)words;
@end

