/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPObjectMapper.h>

@protocol MPObjectMapper;
@class NSString;

@interface MPNSArrayMapper : NSObject <MPObjectMapper> {

	id<MPObjectMapper> _mapper;

}

@property (nonatomic,retain) id<MPObjectMapper> mapper;              //@synthesize mapper=_mapper - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInternalMapper:(id)arg1 ;
-(id)mappedObjectFromSourceObject:(id)arg1 ;
-(Class)requiredSourceObjectClass;
-(id)init;
-(void)setMapper:(id<MPObjectMapper>)arg1 ;
-(id<MPObjectMapper>)mapper;
@end

