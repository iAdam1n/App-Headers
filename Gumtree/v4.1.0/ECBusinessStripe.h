/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:20 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, ECSearchParameters;

@interface ECBusinessStripe : NSObject {

	BOOL _usesLocation;
	BOOL _hidden;
	NSString* _identifier;
	NSString* _name;
	ECSearchParameters* _searchParameters;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) ECSearchParameters * searchParameters;              //@synthesize searchParameters=_searchParameters - In the implementation block
@property (assign,nonatomic) BOOL usesLocation;                                  //@synthesize usesLocation=_usesLocation - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                        //@synthesize hidden=_hidden - In the implementation block
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 query:(id)arg3 useLocation:(BOOL)arg4 hidden:(BOOL)arg5 ;
-(id)parametersForBusinessStripeQuery:(id)arg1 ;
-(void)setUsesLocation:(BOOL)arg1 ;
-(BOOL)usesLocation;
-(void)setHidden:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(ECSearchParameters *)searchParameters;
-(void)setSearchParameters:(ECSearchParameters *)arg1 ;
-(BOOL)hidden;
@end

