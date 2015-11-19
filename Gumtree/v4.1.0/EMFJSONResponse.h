/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/EMFNetResponse.h>

@class NSDictionary, NSArray;

@interface EMFJSONResponse : EMFNetResponse {

	NSDictionary* _responseDict;
	NSArray* _responseArray;

}

@property (nonatomic,retain) NSDictionary * responseDict;              //@synthesize responseDict=_responseDict - In the implementation block
@property (nonatomic,retain) NSArray * responseArray;                  //@synthesize responseArray=_responseArray - In the implementation block
-(void)setResponseDict:(NSDictionary *)arg1 ;
-(void)setResponseArray:(NSArray *)arg1 ;
-(NSDictionary *)responseDict;
-(NSArray *)responseArray;
-(void)parseData:(id)arg1 ;
@end
