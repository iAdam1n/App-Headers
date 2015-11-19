/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray;

@interface ECAPIOrderItem : NSObject {

	NSString* _type;
	NSString* _target;
	NSString* _targetIdentifier;
	NSArray* _features;
	NSString* _status;

}

@property (nonatomic,retain) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * target;                        //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) NSString * targetIdentifier;              //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * features;                       //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSString * status;                        //@synthesize status=_status - In the implementation block
-(void)setTarget:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)target;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
-(NSString *)targetIdentifier;
@end

