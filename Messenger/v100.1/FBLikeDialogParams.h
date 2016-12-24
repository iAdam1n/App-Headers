/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBDialogsParams.h>

@class NSString;

@interface FBLikeDialogParams : FBDialogsParams {

	NSString* _objectID;
	unsigned long long _objectType;

}

@property (nonatomic,copy) NSString * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) unsigned long long objectType;              //@synthesize objectType=_objectType - In the implementation block
+(id)methodName;
-(id)dictionaryMethodArgs;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)validate;
-(NSString *)objectID;
-(void)setObjectType:(unsigned long long)arg1 ;
-(unsigned long long)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end
