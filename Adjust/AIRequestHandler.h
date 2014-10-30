//
//  AIRequestHandler.h
//  Adjust
//
//  Created by Christian Wellenbrock on 2013-07-04.
//  Copyright (c) 2013 adjust GmbH. All rights reserved.
//
#import <Foundation/Foundation.h>

#import "AIRequestHandler.h"
#import "AIPackageHandler.h"

@protocol AIRequestHandler

- (id)initWithPackageHandler:(id<AIPackageHandler>) packageHandler;

- (void)sendPackage:(AIActivityPackage *)activityPackage;

@end


@interface AIRequestHandler : NSObject <AIRequestHandler>

+ (id<AIRequestHandler>) handlerWithPackageHandler:(id<AIPackageHandler>)packageHandler;

@end
