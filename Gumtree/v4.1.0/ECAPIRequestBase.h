/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/EMFNetRequest.h>
#import <Gumtree/ECServiceOperation.h>

@class ECAPIConfiguration, NSString, NSMutableDictionary, NSArray;

@interface ECAPIRequestBase : EMFNetRequest <ECServiceOperation> {

	BOOL _useHTTPS;
	ECAPIConfiguration* _configuration;
	NSString* _command;
	NSMutableDictionary* _urlParams;
	NSArray* _inParams;

}

@property (nonatomic,retain) ECAPIConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSString * command;                              //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * urlParams;                 //@synthesize urlParams=_urlParams - In the implementation block
@property (nonatomic,retain) NSArray * inParams;                              //@synthesize inParams=_inParams - In the implementation block
@property (assign,nonatomic) BOOL useHTTPS;                                   //@synthesize useHTTPS=_useHTTPS - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)createResponseWithRequest:(id)arg1 withResponse:(id)arg2 withData:(id)arg3 withError:(id)arg4 ;
-(void)setUseHTTPS:(BOOL)arg1 ;
-(NSMutableDictionary *)urlParams;
-(void)setUrlParams:(NSMutableDictionary *)arg1 ;
-(id)nodeWithLocation:(id)arg1 ;
-(id)nodeWithAttribute:(id)arg1 ;
-(id)nodeWithPicture:(id)arg1 ;
-(void)setURLParam:(id)arg1 withValue:(id)arg2 ;
-(BOOL)useHTTPS;
-(NSArray *)inParams;
-(void)logURL:(id)arg1 requestBody:(id)arg2 responseBody:(id)arg3 ;
-(id)featureDurationNodeForFeatureOption:(id)arg1 ;
-(id)featurePriceNodeForFeatureOption:(id)arg1 ;
-(void)addPostRootAttributes:(id)arg1 ;
-(void)setETag:(id)arg1 ;
-(id)eTag;
-(id)nodeWithCategory:(id)arg1 ;
-(id)nodeWithAd:(id)arg1 ;
-(id)nodeWithAlert:(id)arg1 ;
-(void)setPage:(id)arg1 pageSize:(id)arg2 ;
-(id)optionNodeForFeatureOption:(id)arg1 ;
-(void)setInParams:(NSArray *)arg1 ;
-(NSString *)command;
-(id)init;
-(NSString *)description;
-(void)setConfiguration:(ECAPIConfiguration *)arg1 ;
-(ECAPIConfiguration *)configuration;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(id)requestURL;
-(void)setCommand:(NSString *)arg1 ;
@end

