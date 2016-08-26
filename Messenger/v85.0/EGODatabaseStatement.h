/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class EGODatabase, NSString, NSArray;

@interface EGODatabaseStatement : NSObject {

	EGODatabase* db_;
	NSString* sql_;
	NSArray* columnNames_;
	BOOL finalized_;
	sqlite3_stmtRef statement_;

}

@property (assign,nonatomic) sqlite3_stmtRef sqliteHandle; 
@property (nonatomic,copy) NSString * sql; 
@property (nonatomic,retain) NSArray * columnNames; 
+(id)statementWithSQL:(id)arg1 database:(id)arg2 ;
-(BOOL)bindToParameters:(id)arg1 ;
-(sqlite3_stmtRef)sqliteHandle;
-(void)setColumnNames:(NSArray *)arg1 ;
-(void)bindObject:(id)arg1 toColumn:(int)arg2 ;
-(void)setSqliteHandle:(sqlite3_stmtRef)arg1 ;
-(void)dealloc;
-(id)description;
-(BOOL)reset;
-(NSString *)sql;
-(BOOL)finalizeStatement;
-(void)setSql:(NSString *)arg1 ;
-(NSArray *)columnNames;
-(BOOL)prepare;
-(id)initWithSQL:(id)arg1 database:(id)arg2 ;
@end
