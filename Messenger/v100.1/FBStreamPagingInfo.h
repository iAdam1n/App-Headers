/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBStreamPagingInfo : NSObject <NSCopying> {

	BOOL _canLoadInitial;
	BOOL _canLoadHead;
	BOOL _canLoadTail;
	NSString* _headCursor;
	NSString* _tailCursor;

}

@property (nonatomic,readonly) BOOL canLoadInitial;                     //@synthesize canLoadInitial=_canLoadInitial - In the implementation block
@property (nonatomic,copy,readonly) NSString * headCursor;              //@synthesize headCursor=_headCursor - In the implementation block
@property (nonatomic,readonly) BOOL canLoadHead;                        //@synthesize canLoadHead=_canLoadHead - In the implementation block
@property (nonatomic,copy,readonly) NSString * tailCursor;              //@synthesize tailCursor=_tailCursor - In the implementation block
@property (nonatomic,readonly) BOOL canLoadTail;                        //@synthesize canLoadTail=_canLoadTail - In the implementation block
+(id)pagingInfoForConnectionState:(id)arg1 ;
+(id)pagingInfoForInitialLoad;
+(id)pagingInfoForPageInfo:(id)arg1 ;
-(BOOL)canLoadHead;
-(BOOL)canLoadTail;
-(id)initWithCanLoadInitial:(BOOL)arg1 headCursor:(id)arg2 canLoadHead:(BOOL)arg3 tailCursor:(id)arg4 canLoadTail:(BOOL)arg5 ;
-(id)pagingInfoUpdatedForTailResult:(id)arg1 ;
-(id)pagingInfoUpdatedForHeadResult:(id)arg1 ;
-(NSString *)tailCursor;
-(BOOL)canLoadInitial;
-(NSString *)headCursor;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
