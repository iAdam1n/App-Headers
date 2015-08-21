/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, EGODatabaseStatement;

@interface EGODatabase : NSObject {

	NSString* databasePath;
	BOOL opened;
	EGODatabaseStatement* beginStatement_;
	EGODatabaseStatement* rollbackStatement_;
	EGODatabaseStatement* commitStatement_;
	BOOL _fileProtectionEnabled;
	sqlite3Ref handle;

}

@property (nonatomic,retain) EGODatabaseStatement * beginStatement; 
@property (nonatomic,retain) EGODatabaseStatement * rollbackStatement; 
@property (nonatomic,retain) EGODatabaseStatement * commitStatement; 
@property (nonatomic,readonly) sqlite3Ref sqliteHandle; 
-(id)lastDBErrorForDomain:(id)arg1 ;
-(void)setBeginStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)beginStatement;
-(void)setRollbackStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)rollbackStatement;
-(void)setCommitStatement:(EGODatabaseStatement *)arg1 ;
-(EGODatabaseStatement *)commitStatement;
-(BOOL)finalizeStatement:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg1 parameters:(id)arg2 ;
-(BOOL)executeSingleUpdateStatement:(id)arg1 parameters:(id)arg2 error:(id*)arg3 ;
-(sqlite3Ref)sqliteHandle;
-(BOOL)executeUpdateStatements:(id)arg1 parameterLists:(id)arg2 inOperation:(id)arg3 error:(id*)arg4 ;
-(BOOL)executeSingleUpdateStatement:(id)arg1 error:(id*)arg2 ;
-(id)executeQuery:(id)arg1 parameters:(id)arg2 ;
-(id)executeQueryStatement:(id)arg1 parameters:(id)arg2 ;
-(id)initWithPath:(id)arg1 fileProtectionEnabled:(BOOL)arg2 ;
-(void)interruptCurrentOperation;
-(BOOL)executeUpdateWithParameters:(id)arg1 ;
-(BOOL)executeUpdateStatement:(id)arg1 parameters:(id)arg2 ;
-(BOOL)executeUpdateStatements:(id)arg1 parameterLists:(id)arg2 error:(id*)arg3 ;
-(BOOL)executeMultiStatement:(id)arg1 ;
-(id)executeQueryWithParameters:(id)arg1 ;
-(void)finalizeStatementsAndClose:(id)arg1 ;
-(void)dealloc;
-(void)close;
-(id)open;
-(BOOL)executeUpdate:(id)arg1 ;
-(id)executeQuery:(id)arg1 ;
-(BOOL)hadError;
-(id)lastErrorMessage;
-(int)lastErrorCode;
@end

