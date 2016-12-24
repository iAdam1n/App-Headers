/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSDictionary;

@interface FBSectionComponentDataSourceModel : NSObject {

	id<NSObject> _model;
	id<NSObject> _context;
	/*^block*/id _componentBlock;
	NSDictionary* _accessoryModel;

}

@property (nonatomic,copy,readonly) NSDictionary * accessoryModel;              //@synthesize accessoryModel=_accessoryModel - In the implementation block
@property (nonatomic,readonly) id<NSObject> model;                              //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<NSObject> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) id componentBlock;                          //@synthesize componentBlock=_componentBlock - In the implementation block
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 accessoryModel:(id)arg4 ;
-(id)initWithModel:(id)arg1 context:(id)arg2 componentBlock:(/*^block*/id)arg3 ;
-(id)componentBlock;
-(NSDictionary *)accessoryModel;
-(id)description;
-(id<NSObject>)context;
-(id<NSObject>)model;
@end
