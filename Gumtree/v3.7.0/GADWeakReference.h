/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSValue;

@interface GADWeakReference : NSObject {

	id _weakObject;
	NSValue* _uniqueID;

}

@property (nonatomic,__weak,readonly) id weakObject;              //@synthesize weakObject=_weakObject - In the implementation block
@property (nonatomic,readonly) NSValue * uniqueID;                //@synthesize uniqueID=_uniqueID - In the implementation block
+(BOOL)set:(id)arg1 containsObject:(id)arg2 ;
-(id)weakObject;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithObject:(id)arg1 ;
-(NSValue *)uniqueID;
@end

