/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCopying.h>

@class NSString, FBMThreadKey;

@interface FBMThreadDescriptor : NSObject <NSCopying> {

	NSString* _DEPRECATED_threadId;
	NSString* _threadFbId;
	FBMThreadKey* _threadKey;

}

@property (nonatomic,copy,readonly) NSString * DEPRECATED_threadId;              //@synthesize DEPRECATED_threadId=_DEPRECATED_threadId - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadFbId;                       //@synthesize threadFbId=_threadFbId - In the implementation block
@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                    //@synthesize threadKey=_threadKey - In the implementation block
-(id)initWithThreadFbId:(id)arg1 ;
-(NSString *)threadFbId;
-(id)initWithThreadKey:(id)arg1 ;
-(NSString *)DEPRECATED_threadId;
-(id)initWithThreadId_DEPRECATED:(id)arg1 ;
-(id)initForThreadWithContact:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBMThreadKey *)threadKey;
@end

