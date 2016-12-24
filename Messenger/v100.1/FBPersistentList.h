/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObject;
@interface FBPersistentList : NSObject <NSCopying> {

	BOOL _isEmptyList;
	id<NSObject> _headValue;
	FBPersistentList* _tail;

}

@property (nonatomic,readonly) id<NSObject> headValue;                    //@synthesize headValue=_headValue - In the implementation block
@property (nonatomic,copy,readonly) FBPersistentList * tail;              //@synthesize tail=_tail - In the implementation block
+(id)listWithSingleValue:(id)arg1 ;
+(id)emptyList;
+(id)listWithArray:(id)arg1 ;
+(void)initialize;
-(id)initWithHeadValue:(id)arg1 tail:(id)arg2 ;
-(id<NSObject>)headValue;
-(id)listByPrependingValue:(id)arg1 ;
-(id)appendList:(id)arg1 ;
-(id)foldLeftWithInitialValue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)foldRightWithInitialValue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBPersistentList *)tail;
@end
