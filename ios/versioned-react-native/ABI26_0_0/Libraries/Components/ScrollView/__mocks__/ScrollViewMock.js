/**
 * Copyright (c) 2013-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *
 * @flow
 */

/* eslint-env jest */

'use strict';

declare var jest: any;

const React = require('react');
const View = require('../../View/View');

const requireNativeComponent = require('../../../ReactNative/requireNativeComponent');

const RCTScrollView = requireNativeComponent('RCTScrollView');

const ScrollViewComponent = jest.genMockFromModule('../ScrollView');

class ScrollViewMock extends ScrollViewComponent {
  render() {
    return (
      <RCTScrollView {...this.props}>
        {this.props.refreshControl}
        <View>
          {this.props.children}
        </View>
      </RCTScrollView>
    );
  }
}

module.exports = ScrollViewMock;
