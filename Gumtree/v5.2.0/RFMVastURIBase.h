/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 30, 2016 at 12:04:10 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4EC3D7DE-EC7A-4340-8E6F-37E25C97EB19/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/RFMVastBase.h>
#import <Gumtree/RFMXMLModelProtocol.h>

@class NSURL, NSString;

@interface RFMVastURIBase : RFMVastBase <RFMXMLModelProtocol> {

	NSURL* _urlValue;

}

@property (nonatomic,retain) NSURL * urlValue;                      //@synthesize urlValue=_urlValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleElement:(id)arg1 attributes:(id)arg2 foundCharacters:(id)arg3 ;
-(void)setUrlValue:(NSURL *)arg1 ;
-(NSURL *)urlValue;
@end
