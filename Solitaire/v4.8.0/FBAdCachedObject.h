/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBAdCachedObject : NSObject {

	double _expiration;
	id _object;

}

@property (assign,nonatomic) double expiration;              //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,retain) id object;                      //@synthesize object=_object - In the implementation block
-(id)initWithObject:(id)arg1 withExpiration:(id)arg2 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)setExpiration:(double)arg1 ;
-(double)expiration;
@end
