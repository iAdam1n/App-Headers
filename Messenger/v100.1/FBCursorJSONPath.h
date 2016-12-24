/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBCursorJSONPath : NSObject {

	NSString* _parentRequestName;
	NSString* _connectionName;
	NSString* _targetID;
	NSString* _cursorType;

}

@property (nonatomic,copy) NSString * parentRequestName;              //@synthesize parentRequestName=_parentRequestName - In the implementation block
@property (nonatomic,copy) NSString * connectionName;                 //@synthesize connectionName=_connectionName - In the implementation block
@property (nonatomic,copy) NSString * targetID;                       //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy) NSString * cursorType;                     //@synthesize cursorType=_cursorType - In the implementation block
-(NSString *)parentRequestName;
-(void)setParentRequestName:(NSString *)arg1 ;
-(NSString *)connectionName;
-(void)setConnectionName:(NSString *)arg1 ;
-(NSString *)cursorType;
-(void)setCursorType:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)stringValue;
-(void)setTargetID:(NSString *)arg1 ;
-(NSString *)targetID;
@end
