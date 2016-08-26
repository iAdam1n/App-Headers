/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol EGODatabaseRequestDelegate;
@class NSArray, NSString, EGODatabase, EGODatabaseStatement, EGODatabaseResult;

@interface EGODatabaseRequest : NSOperation {

	NSArray* parameters;
	long long tag;
	NSString* query;
	EGODatabase* database;
	int requestKind;
	id<EGODatabaseRequestDelegate> delegate;
	EGODatabaseStatement* statement;
	EGODatabaseResult* result;

}

@property (assign,nonatomic) long long tag; 
@property (nonatomic,retain) EGODatabase * database; 
@property (assign,nonatomic) int requestKind; 
@property (assign,nonatomic) id<EGODatabaseRequestDelegate> delegate; 
@property (retain) EGODatabaseResult * result; 
+(id)requestWithStatement:(id)arg1 parameters:(id)arg2 ;
-(id)initWithQuery:(id)arg1 parameters:(id)arg2 ;
-(id)initWithStatement:(id)arg1 parameters:(id)arg2 ;
-(int)requestKind;
-(void)setRequestKind:(int)arg1 ;
-(void)setDelegate:(id<EGODatabaseRequestDelegate>)arg1 ;
-(void)dealloc;
-(id<EGODatabaseRequestDelegate>)delegate;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(void)main;
-(EGODatabaseResult *)result;
-(void)setResult:(EGODatabaseResult *)arg1 ;
-(EGODatabase *)database;
-(void)didFailWithError:(id)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(void)didSucceed;
-(void)setDatabase:(EGODatabase *)arg1 ;
@end
