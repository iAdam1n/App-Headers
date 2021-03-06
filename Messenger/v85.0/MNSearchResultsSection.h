/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNSearchResultsSection : FBValueObject <NSCopying> {

	BOOL _hasPendingRequest;
	NSArray* _rows;
	long long _originalSection;

}

@property (nonatomic,readonly) BOOL hasPendingRequest;                 //@synthesize hasPendingRequest=_hasPendingRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                    //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) long long originalSection;              //@synthesize originalSection=_originalSection - In the implementation block
-(long long)originalSection;
-(id)initWithHasPendingRequest:(BOOL)arg1 rows:(id)arg2 originalSection:(long long)arg3 ;
-(BOOL)hasPendingRequest;
-(NSArray *)rows;
@end

